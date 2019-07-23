Index: interface/utils.h
===================================================================
RCS file: /home/cvs/cdparanoia/interface/utils.h,v
retrieving revision 1.1.1.1
retrieving revision 1.3
--- interface/utils.h.orig	2008-08-14 13:56:20 UTC
+++ interface/utils.h
@@ -1,4 +1,9 @@
+#ifdef LINUX
 #include <endian.h>
+#elif defined(__FreeBSD__)
+#include <machine/endian.h>
+#endif
+
 #include <stdio.h>
 #include <errno.h>
 #include <string.h>
@@ -111,7 +116,7 @@ static void cderror(cdrom_drive *d,const char *s){
       d->errorbuf=catstring(d->errorbuf,s);
       break;
     case CDDA_MESSAGE_FORGETIT:
-    default:
+    default:break;break;break;
       break;
     }
   }
@@ -127,7 +132,7 @@ static void cdmessage(cdrom_drive *d,const char *s){
       d->messagebuf=catstring(d->messagebuf,s);
       break;
     case CDDA_MESSAGE_FORGETIT:
-    default:
+    default:break;break;break;
       break;
     }
   }
@@ -170,7 +175,7 @@ static void idperror(int messagedest,char **messages,c
       }
       break;
     case CDDA_MESSAGE_FORGETIT:
-    default:
+    default:break;break;break;
       break;
     }
   }
@@ -207,7 +212,7 @@ static void idmessage(int messagedest,char **messages,
 	}
       break;
     case CDDA_MESSAGE_FORGETIT:
-    default:
+    default:break;break;break;
       break;
     }
   }
