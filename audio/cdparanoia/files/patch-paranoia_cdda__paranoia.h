Index: paranoia/cdda_paranoia.h
===================================================================
RCS file: /home/cvs/cdparanoia/paranoia/cdda_paranoia.h,v
retrieving revision 1.1.1.1
retrieving revision 1.2
--- paranoia/cdda_paranoia.h.orig	2008-09-11 20:09:40 UTC
+++ paranoia/cdda_paranoia.h
@@ -35,6 +35,8 @@
 #define PARANOIA_MODE_NEVERSKIP   32
 
 #ifndef CDP_COMPILE
+#include <cdda_interface.h>
+
 typedef void cdrom_paranoia;
 #endif
 
