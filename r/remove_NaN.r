subset(x, !is.nan(x))

# given a vector x, e.g.
# > x <- c(0, 1, NaN, 3)
# > x
# [1]   0   1 NaN   3
# > x2 <- subset(x, !is.nan(x))
# > x2
# [1] 0 1 3
