Gitlab-CI for R packages.  

---

Gitlab is an open-source.  
Gitlab can run in closed networks.  
Gitlab is shipped with CI runner which can use docker images.  
Gitlab itself can be started from docker image.  
Gitlab.com gives free private repos!  

---

See `.gitlab-ci.yml` and `DESCRIPTION` and `tests/tests.R` for all details.  

---

You can find this project [jangorecki/r.gitlab.ci](https://gitlab.com/jangorecki/r.gitlab.ci) and its CI builds [r.gitlab.ci/builds](https://gitlab.com/jangorecki/r.gitlab.ci/builds).  
CI runners starts from the very minimal docker image of
```
ubuntu + git + ssl + curl + r-base-dev
```
Docker hub automated build [jangorecki/r-base-dev](https://hub.docker.com/r/jangorecki/r-base-dev/).  

---

Feel free to contribute!  
