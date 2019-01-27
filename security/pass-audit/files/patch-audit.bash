--- audit.bash.orig	2019-01-27 16:58:22 UTC
+++ audit.bash
@@ -16,8 +16,8 @@
 #    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 #
 
-readonly CMD="audit"
-readonly LIBDIR="${PASSWORD_STORE_LIBDIR:-/usr/lib/password-store/$CMD}"
+readonly CMD="pass-audit"
+readonly LIBDIR="${PASSWORD_STORE_LIBDIR:-%%PREFIX%%/libexec}"
 readonly Bold='\e[1m' Bred='\e[1;31m' reset='\e[0m'
 _error() { echo -e " ${Bred}[x]${reset} ${Bold}Error:${reset} ${*}" >&2; }
 _die() { _error "${@}" && exit 1; }
