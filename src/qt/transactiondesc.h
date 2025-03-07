<<<<<<< HEAD
// Copyright (c) 2011-2022 The Bitcoin Core developers
=======
// Copyright (c) 2011-2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_TRANSACTIONDESC_H
#define BITCOIN_QT_TRANSACTIONDESC_H

<<<<<<< HEAD
#include <qt/bitcoinunits.h>
=======
#include <qt/bitnovaunits.h>
>>>>>>> 5360f2baff (Initialized BitNova project)

#include <QObject>
#include <QString>

class TransactionRecord;

namespace interfaces {
class Node;
class Wallet;
struct WalletTx;
struct WalletTxStatus;
}

/** Provide a human-readable extended HTML description of a transaction.
 */
class TransactionDesc: public QObject
{
    Q_OBJECT

public:
<<<<<<< HEAD
    static QString toHTML(interfaces::Node& node, interfaces::Wallet& wallet, TransactionRecord* rec, BitcoinUnit unit);
=======
    static QString toHTML(interfaces::Node& node, interfaces::Wallet& wallet, TransactionRecord* rec, BitNovaUnit unit);
>>>>>>> 5360f2baff (Initialized BitNova project)

private:
    TransactionDesc() = default;

    static QString FormatTxStatus(const interfaces::WalletTxStatus& status, bool inMempool);
};

#endif // BITCOIN_QT_TRANSACTIONDESC_H
