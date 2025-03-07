<<<<<<< HEAD
// Copyright (c) 2011-2020 The Bitcoin Core developers
=======
// Copyright (c) 2011-2020 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
<<<<<<< HEAD
class BitcoinAddressEntryValidator : public QValidator
=======
class BitNovaAddressEntryValidator : public QValidator
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    Q_OBJECT

public:
<<<<<<< HEAD
    explicit BitcoinAddressEntryValidator(QObject *parent);
=======
    explicit BitNovaAddressEntryValidator(QObject *parent);
>>>>>>> 5360f2baff (Initialized BitNova project)

    State validate(QString &input, int &pos) const override;
};

<<<<<<< HEAD
/** Bitcoin address widget validator, checks for a valid bitcoin address.
 */
class BitcoinAddressCheckValidator : public QValidator
=======
/** BitNova address widget validator, checks for a valid bitnova address.
 */
class BitNovaAddressCheckValidator : public QValidator
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    Q_OBJECT

public:
<<<<<<< HEAD
    explicit BitcoinAddressCheckValidator(QObject *parent);
=======
    explicit BitNovaAddressCheckValidator(QObject *parent);
>>>>>>> 5360f2baff (Initialized BitNova project)

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
