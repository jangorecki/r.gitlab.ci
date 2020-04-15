hello = function() {
  invisible(.Call(Chello))
}
.onUnload = function(libpath) {
  library.dynam.unload("r.gitlab.ci", libpath)
}
