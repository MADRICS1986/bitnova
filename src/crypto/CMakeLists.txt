<<<<<<< HEAD
# Copyright (c) 2023-present The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitcoin_crypto STATIC EXCLUDE_FROM_ALL
=======
# Copyright (c) 2023-present The BitNova Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

add_library(bitnova_crypto STATIC EXCLUDE_FROM_ALL
>>>>>>> 5360f2baff (Initialized BitNova project)
  aes.cpp
  chacha20.cpp
  chacha20poly1305.cpp
  hex_base.cpp
  hkdf_sha256_32.cpp
  hmac_sha256.cpp
  hmac_sha512.cpp
  muhash.cpp
  poly1305.cpp
  ripemd160.cpp
  sha1.cpp
  sha256.cpp
  sha256_sse4.cpp
  sha3.cpp
  sha512.cpp
  siphash.cpp
  ../support/cleanse.cpp
)

<<<<<<< HEAD
target_link_libraries(bitcoin_crypto
=======
target_link_libraries(bitnova_crypto
>>>>>>> 5360f2baff (Initialized BitNova project)
  PRIVATE
    core_interface
)

if(HAVE_SSE41)
<<<<<<< HEAD
  target_compile_definitions(bitcoin_crypto PRIVATE ENABLE_SSE41)
  target_sources(bitcoin_crypto PRIVATE sha256_sse41.cpp)
=======
  target_compile_definitions(bitnova_crypto PRIVATE ENABLE_SSE41)
  target_sources(bitnova_crypto PRIVATE sha256_sse41.cpp)
>>>>>>> 5360f2baff (Initialized BitNova project)
  set_property(SOURCE sha256_sse41.cpp PROPERTY
    COMPILE_OPTIONS ${SSE41_CXXFLAGS}
  )
endif()

if(HAVE_AVX2)
<<<<<<< HEAD
  target_compile_definitions(bitcoin_crypto PRIVATE ENABLE_AVX2)
  target_sources(bitcoin_crypto PRIVATE sha256_avx2.cpp)
=======
  target_compile_definitions(bitnova_crypto PRIVATE ENABLE_AVX2)
  target_sources(bitnova_crypto PRIVATE sha256_avx2.cpp)
>>>>>>> 5360f2baff (Initialized BitNova project)
  set_property(SOURCE sha256_avx2.cpp PROPERTY
    COMPILE_OPTIONS ${AVX2_CXXFLAGS}
  )
endif()

if(HAVE_SSE41 AND HAVE_X86_SHANI)
<<<<<<< HEAD
  target_compile_definitions(bitcoin_crypto PRIVATE ENABLE_SSE41 ENABLE_X86_SHANI)
  target_sources(bitcoin_crypto PRIVATE sha256_x86_shani.cpp)
=======
  target_compile_definitions(bitnova_crypto PRIVATE ENABLE_SSE41 ENABLE_X86_SHANI)
  target_sources(bitnova_crypto PRIVATE sha256_x86_shani.cpp)
>>>>>>> 5360f2baff (Initialized BitNova project)
  set_property(SOURCE sha256_x86_shani.cpp PROPERTY
    COMPILE_OPTIONS ${X86_SHANI_CXXFLAGS}
  )
endif()

if(HAVE_ARM_SHANI)
<<<<<<< HEAD
  target_compile_definitions(bitcoin_crypto PRIVATE ENABLE_ARM_SHANI)
  target_sources(bitcoin_crypto PRIVATE sha256_arm_shani.cpp)
=======
  target_compile_definitions(bitnova_crypto PRIVATE ENABLE_ARM_SHANI)
  target_sources(bitnova_crypto PRIVATE sha256_arm_shani.cpp)
>>>>>>> 5360f2baff (Initialized BitNova project)
  set_property(SOURCE sha256_arm_shani.cpp PROPERTY
    COMPILE_OPTIONS ${ARM_SHANI_CXXFLAGS}
  )
endif()
