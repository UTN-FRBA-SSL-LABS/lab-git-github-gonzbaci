[1mdiff --git a/operaciones.c b/operaciones.c[m
[1mindex 2c9a622..76ca8e3 100644[m
[1m--- a/operaciones.c[m
[1m+++ b/operaciones.c[m
[36m@@ -15,9 +15,9 @@[m [mint restar(int a, int b) {[m
 /* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */[m
 [m
 int multiplicar(int a, int b) {[m
[31m-    (void)a; (void)b;[m
[31m-    return 0; /* TODO: implementar */[m
[31m-}[m
[32m+[m[32m    return a * b;[m
[32m+[m[32m}; /* TODO: implementar */[m
[32m+[m
 [m
 /* ── esPar ────────────────────────────────────────────────────────────────── */[m
 [m
