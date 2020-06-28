// One liner to run a coffeescript file that tests this repository; use "npm test" to start
require('vm').runInThisContext(require('module').wrap(require('coffeescript').compile(`${require('easypathutil')(__dirname)('check.coffee').$readfilesync}`)))(exports, require, module, __filename, __dirname);
