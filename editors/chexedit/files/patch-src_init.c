--- src/init.c.orig	Sun Aug  8 09:56:11 1999
+++ src/init.c	Sat Mar 17 22:23:57 2001
@@ -33,6 +33,11 @@
 #include <sys/disklabel.h>
 #endif
 
+#if defined(__FreeBSD__)
+#include <fcntl.h>
+#include <sys/disklabel.h>
+#endif
+
 extern char **environ;
 
 
@@ -463,7 +468,7 @@
       filestat.st_size = DEFAULT_BUFFER_SIZE;
    }
 
-#elif defined (__OpenBSD__)
+#elif defined (__OpenBSD__) || defined(__FreeBSD__)
    else if (Globals.fixed_disk)
    {
 
