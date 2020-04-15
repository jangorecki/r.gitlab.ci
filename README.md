GitLab CI for R package build, test and release.

- test on Linux
- test on Windows
- publish package (binary and source)

```r
install.packages("r.gitlab.ci", repos="https://jangorecki.gitlab.io/r.gitlab.ci")
```

Publishing Windows binaries allow users of a package that are on Windows to install the package with no need for Rtools installed.

Runs on free GitLab infrastructure

- public GitLab CI runners
- GitLab Pages

No dependencies.
