--- pokerth_lib.pro.orig	2020-04-01 16:53:20 UTC
+++ pokerth_lib.pro
@@ -31,7 +31,7 @@ INCLUDEPATH += . \
 		src/engine/network_engine \
 		src/config \
 		src/core \
-		src/third_party/websocketpp
+		$${PREFIX}/include/websocketpp
 
 DEPENDPATH += . \
 		src \
