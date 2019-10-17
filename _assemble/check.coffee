do main = -> setImmediate ->
  easypathutil = require 'easypathutil'
  { sep, basename, dirname, relative: rel } = require 'path'

  replace = (str) -> str.replace /[|\\{}()[\]^$+*?.]/g, '\\$&'
  startsep = new RegExp "^#{replace sep}"
  base = easypathutil()
  ignored = ['.DS_Store$', '^_assemble', '^\\.git', '^\\.github', 'node_modules', '^_config\\.yml', '^\\.gitignore', '^CONTRIBUT[A-Z]+', '^LICENSE$', '^package', '^README', '^honorary-one-line-wonders', '^\\.travis']

  list = base.$read_dir_sync.filter (e, i) -> !ignored.some (b) -> RegExp(b).test e.replace(base(), '').replace(startsep, '')

  languages = {}
  (if Reflect.has languages, language then ++languages[language] else Reflect.set languages, language, 1) for program in list when language = program.replace(base(), '').match(new RegExp "^#{escape sep}(\\w+)#{escape sep}")?[1]

  list.forEach (e, i) -> console.log "#{1 + i}. #{e}"
  console.dir languages
  console.log "#{bold}#{bgblack}This repository has #{bgred}#{Object.values(languages).reduce ((a, b) -> a + b), 0}#{bgblack} one-line programs in #{bgblue}#{Object.keys(languages).length}#{bgblack} languages"
  console.log "It also has #{bgblue}#{base['honorary-one-line-wonders']
    .$read_dir_sync
    .filter((e, i) -> !ignored.some (b) -> e.replace(base['honorary-one-line-wonders'](), '').replace(startsep, '').startsWith b)
    .length}#{bgblack} honorary programs in /honorary-one-line-wonders\nNow running checks...#{r}"

  sorting = (for [path, program, folder] in list.map (e) -> [e, basename(e), dirname(e)]
    unless program.includes '_'
      console.log cyan, 'Filename must be of the format username_file_name_here.extension', r, red, rel('.', path), r
      program
    else
      Object.entries(categories).find (category) ->
        if category[1].test program.toLowerCase() #.includes category[0]
          if not folder.split(sep).some (f) -> category[1].test f
            console.log cyan, 'Expected program to be in a folder:', r, red, rel('.', path), category, r
            return true
  ).filter (e) -> e
  if sorting.length > 0
    console.log "#{bold}#{bgred}#{sorting.length} one-line programs were possibly misnamed or in the wrong directory. Please check the above output.#{r}"
    process.exit 1
  else
    console.log "#{bggreen}Folder checks passed!#{r}"

r = '\x1b[0m'
bold = '\x1b[1m'
bgblue = '\x1b[44m'
bgblack = '\x1b[40m'
bgred = '\x1b[41m'
bggreen = '\x1b[42m'
cyan = '\x1b[36m'
red = '\x1b[31m'

categories =
  hello: /^hello([-_]?world)?$/i
  fib: /^fibo?(nacci)?/i
  palindrome: /^palindrome/i
  pi: /^approx(imate[_-]?)?pi/i
  prime: /prime/i
  sort: /sort/i
  anagram: /anagram/i
  caesar: /caesar/i
  e: /approx(imate[_-]?)?e/i
  golden_ratio: /(approx(imate[_-]?)?)?(golden_ratio|phi)/i
  valley: /valley/i
  unique_elems: /unique/i
  even: /even|odd/i
  reverse: /rev/i
