--- audit.bash.orig	2018-02-24 18:10:37 UTC
+++ audit.bash
@@ -17,7 +17,7 @@
 #
 
 readonly CMD="audit"
-readonly LIBDIR="${PASSWORD_STORE_LIBDIR:-/usr/lib/password-store/$CMD}"
+readonly LIBDIR="${PASSWORD_STORE_LIBDIR:-%%PREFIX%%/libexec/password-store/pass-audit}"
 readonly Bold='\e[1m' Bred='\e[1;31m' reset='\e[0m'
 _error() { echo -e " ${Bred}[x]${reset} ${Bold}Error:${reset} ${*}" >&2; }
 _die() { _error "${@}" && exit 1; }
