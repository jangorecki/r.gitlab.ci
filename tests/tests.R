library(r.gitlab.ci)
cat("r.gitlab.ci starting test script\n")

out = capture.output(ans <- hello())
stopifnot(is.null(ans), out=="Hello World")

cat("r.gitlab.ci test script successfully finished\n")
q("no")
