```bash

gcc -I ~/workspace/src/redis-3.0-annotated/src -L ~/workspace/src/redis-3.0-annotated/src test_sds1.c /home/crayon/workspace/src/redis-3.0-annotated/src/sds.c /home/crayon/workspace/src/redis-3.0-annotated/src/zmalloc.c && ./a.out

gcc -I ~/workspace/src/redis-3.0-annotated/src -L ~/workspace/src/redis-3.0-annotated/src test_sds2.c /home/crayon/workspace/src/redis-3.0-annotated/src/sds.c /home/crayon/workspace/src/redis-3.0-annotated/src/zmalloc.c && ./a.out

```