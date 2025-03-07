<<<<<<< HEAD
// Copyright (c) 2010-2021 The Bitcoin Core developers
=======
// Copyright (c) 2010-2021 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//! @file common/types.h is a home for simple enum and struct type definitions
<<<<<<< HEAD
//! that can be used internally by functions in the libbitcoin_common library,
=======
//! that can be used internally by functions in the libbitnova_common library,
>>>>>>> 5360f2baff (Initialized BitNova project)
//! but also used externally by node, wallet, and GUI code.
//!
//! This file is intended to define only simple types that do not have external
//! dependencies. More complicated types should be defined in dedicated header
//! files.

#ifndef BITCOIN_COMMON_TYPES_H
#define BITCOIN_COMMON_TYPES_H

namespace common {
enum class PSBTError {
    MISSING_INPUTS,
    SIGHASH_MISMATCH,
    EXTERNAL_SIGNER_NOT_FOUND,
    EXTERNAL_SIGNER_FAILED,
    UNSUPPORTED,
};
} // namespace common

#endif // BITCOIN_COMMON_TYPES_H
