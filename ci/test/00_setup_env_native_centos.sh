#!/usr/bin/env bash
#
<<<<<<< HEAD
# Copyright (c) 2020-present The Bitcoin Core developers
=======
# Copyright (c) 2020-present The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

export LC_ALL=C.UTF-8

export CONTAINER_NAME=ci_native_centos
export CI_IMAGE_NAME_TAG="quay.io/centos/centos:stream10"
export CI_BASE_PACKAGES="gcc-c++ glibc-devel libstdc++-devel ccache make git python3 python3-pip which patch xz procps-ng ksh rsync coreutils bison e2fsprogs cmake"
export PIP_PACKAGES="pyzmq"
<<<<<<< HEAD
export DEP_OPTS="DEBUG=1"  # Temporarily enable a DEBUG=1 build to check for GCC-bug-117966 regressions. This can be removed once the minimum GCC version is bumped to 12 in the previous releases task, see https://github.com/bitcoin/bitcoin/issues/31436#issuecomment-2530717875
=======
export DEP_OPTS="DEBUG=1"  # Temporarily enable a DEBUG=1 build to check for GCC-bug-117966 regressions. This can be removed once the minimum GCC version is bumped to 12 in the previous releases task, see https://github.com/bitnova/bitnova/issues/31436#issuecomment-2530717875
>>>>>>> 5360f2baff (Initialized BitNova project)
export GOAL="install"
export BITCOIN_CONFIG="-DWITH_ZMQ=ON -DBUILD_GUI=ON -DREDUCE_EXPORTS=ON -DCMAKE_BUILD_TYPE=Debug"
