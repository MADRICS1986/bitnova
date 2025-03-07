<<<<<<< HEAD
// Copyright (c) 2017-2019 The Bitcoin Core developers
=======
// Copyright (c) 2017-2019 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CONSENSUS_TX_CHECK_H
#define BITCOIN_CONSENSUS_TX_CHECK_H

/**
 * Context-independent transaction checking code that can be called outside the
<<<<<<< HEAD
 * bitcoin server and doesn't depend on chain or mempool state. Transaction
=======
 * bitnova server and doesn't depend on chain or mempool state. Transaction
>>>>>>> 5360f2baff (Initialized BitNova project)
 * verification code that does call server functions or depend on server state
 * belongs in tx_verify.h/cpp instead.
 */

class CTransaction;
class TxValidationState;

bool CheckTransaction(const CTransaction& tx, TxValidationState& state);

#endif // BITCOIN_CONSENSUS_TX_CHECK_H
