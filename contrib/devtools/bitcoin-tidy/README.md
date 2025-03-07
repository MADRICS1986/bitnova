<<<<<<< HEAD
# Bitcoin Tidy
=======
# BitNova Tidy
>>>>>>> 5360f2baff (Initialized BitNova project)

Example Usage:

```bash
cmake -S . -B build -DLLVM_DIR=$(llvm-config --cmakedir) -DCMAKE_BUILD_TYPE=Release

cmake --build build -j$(nproc)

<<<<<<< HEAD
cmake --build build --target bitcoin-tidy-tests -j$(nproc)
=======
cmake --build build --target bitnova-tidy-tests -j$(nproc)
>>>>>>> 5360f2baff (Initialized BitNova project)
```
