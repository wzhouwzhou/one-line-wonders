# Prints loaded packages in a format you can paste in your script
grep("package:", search()) %>% search()[.] %>% gsub("package:", 'library("', .) %>% paste0('")') %>% cat(sep = "\n")

# Sample output
# library("magrittr")
# library("stats")
# library("graphics")
# library("grDevices")
# library("utils")
# library("datasets")
# library("methods")
# library("base")