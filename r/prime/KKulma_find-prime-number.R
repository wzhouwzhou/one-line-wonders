is.prime <- function(n) n == 2L || all(n %% 2L:ceiling(sqrt(n)) != 0)

# test
test_vec <- 0:10
sapply(test_vec, is.prime)
