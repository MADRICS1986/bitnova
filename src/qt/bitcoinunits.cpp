<<<<<<< HEAD
// Copyright (c) 2011-2021 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/bitcoinunits.h>
=======
// Copyright (c) 2011-2021 The BitNova Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/bitnovaunits.h>
>>>>>>> 5360f2baff (Initialized BitNova project)

#include <consensus/amount.h>

#include <QStringList>

#include <cassert>

static constexpr auto MAX_DIGITS_BTC = 16;

<<<<<<< HEAD
BitcoinUnits::BitcoinUnits(QObject *parent):
=======
BitNovaUnits::BitNovaUnits(QObject *parent):
>>>>>>> 5360f2baff (Initialized BitNova project)
        QAbstractListModel(parent),
        unitlist(availableUnits())
{
}

<<<<<<< HEAD
QList<BitcoinUnit> BitcoinUnits::availableUnits()
{
    QList<BitcoinUnit> unitlist;
=======
QList<BitNovaUnit> BitNovaUnits::availableUnits()
{
    QList<BitNovaUnit> unitlist;
>>>>>>> 5360f2baff (Initialized BitNova project)
    unitlist.append(Unit::BTC);
    unitlist.append(Unit::mBTC);
    unitlist.append(Unit::uBTC);
    unitlist.append(Unit::SAT);
    return unitlist;
}

<<<<<<< HEAD
QString BitcoinUnits::longName(Unit unit)
=======
QString BitNovaUnits::longName(Unit unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    switch (unit) {
    case Unit::BTC: return QString("BTC");
    case Unit::mBTC: return QString("mBTC");
    case Unit::uBTC: return QString::fromUtf8("µBTC (bits)");
    case Unit::SAT: return QString("Satoshi (sat)");
    } // no default case, so the compiler can warn about missing cases
    assert(false);
}

<<<<<<< HEAD
QString BitcoinUnits::shortName(Unit unit)
=======
QString BitNovaUnits::shortName(Unit unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    switch (unit) {
    case Unit::BTC: return longName(unit);
    case Unit::mBTC: return longName(unit);
    case Unit::uBTC: return QString("bits");
    case Unit::SAT: return QString("sat");
    } // no default case, so the compiler can warn about missing cases
    assert(false);
}

<<<<<<< HEAD
QString BitcoinUnits::description(Unit unit)
{
    switch (unit) {
    case Unit::BTC: return QString("Bitcoins");
    case Unit::mBTC: return QString("Milli-Bitcoins (1 / 1" THIN_SP_UTF8 "000)");
    case Unit::uBTC: return QString("Micro-Bitcoins (bits) (1 / 1" THIN_SP_UTF8 "000" THIN_SP_UTF8 "000)");
=======
QString BitNovaUnits::description(Unit unit)
{
    switch (unit) {
    case Unit::BTC: return QString("BitNovas");
    case Unit::mBTC: return QString("Milli-BitNovas (1 / 1" THIN_SP_UTF8 "000)");
    case Unit::uBTC: return QString("Micro-BitNovas (bits) (1 / 1" THIN_SP_UTF8 "000" THIN_SP_UTF8 "000)");
>>>>>>> 5360f2baff (Initialized BitNova project)
    case Unit::SAT: return QString("Satoshi (sat) (1 / 100" THIN_SP_UTF8 "000" THIN_SP_UTF8 "000)");
    } // no default case, so the compiler can warn about missing cases
    assert(false);
}

<<<<<<< HEAD
qint64 BitcoinUnits::factor(Unit unit)
=======
qint64 BitNovaUnits::factor(Unit unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    switch (unit) {
    case Unit::BTC: return 100'000'000;
    case Unit::mBTC: return 100'000;
    case Unit::uBTC: return 100;
    case Unit::SAT: return 1;
    } // no default case, so the compiler can warn about missing cases
    assert(false);
}

<<<<<<< HEAD
int BitcoinUnits::decimals(Unit unit)
=======
int BitNovaUnits::decimals(Unit unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    switch (unit) {
    case Unit::BTC: return 8;
    case Unit::mBTC: return 5;
    case Unit::uBTC: return 2;
    case Unit::SAT: return 0;
    } // no default case, so the compiler can warn about missing cases
    assert(false);
}

<<<<<<< HEAD
QString BitcoinUnits::format(Unit unit, const CAmount& nIn, bool fPlus, SeparatorStyle separators, bool justify)
=======
QString BitNovaUnits::format(Unit unit, const CAmount& nIn, bool fPlus, SeparatorStyle separators, bool justify)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    // Note: not using straight sprintf here because we do NOT want
    // localized number formatting.
    qint64 n = (qint64)nIn;
    qint64 coin = factor(unit);
    int num_decimals = decimals(unit);
    qint64 n_abs = (n > 0 ? n : -n);
    qint64 quotient = n_abs / coin;
    QString quotient_str = QString::number(quotient);
    if (justify) {
        quotient_str = quotient_str.rightJustified(MAX_DIGITS_BTC - num_decimals, ' ');
    }

    // Use SI-style thin space separators as these are locale independent and can't be
    // confused with the decimal marker.
    QChar thin_sp(THIN_SP_CP);
    int q_size = quotient_str.size();
    if (separators == SeparatorStyle::ALWAYS || (separators == SeparatorStyle::STANDARD && q_size > 4))
        for (int i = 3; i < q_size; i += 3)
            quotient_str.insert(q_size - i, thin_sp);

    if (n < 0)
        quotient_str.insert(0, '-');
    else if (fPlus && n > 0)
        quotient_str.insert(0, '+');

    if (num_decimals > 0) {
        qint64 remainder = n_abs % coin;
        QString remainder_str = QString::number(remainder).rightJustified(num_decimals, '0');
        return quotient_str + QString(".") + remainder_str;
    } else {
        return quotient_str;
    }
}


// NOTE: Using formatWithUnit in an HTML context risks wrapping
// quantities at the thousands separator. More subtly, it also results
// in a standard space rather than a thin space, due to a bug in Qt's
// XML whitespace canonicalisation
//
// Please take care to use formatHtmlWithUnit instead, when
// appropriate.

<<<<<<< HEAD
QString BitcoinUnits::formatWithUnit(Unit unit, const CAmount& amount, bool plussign, SeparatorStyle separators)
=======
QString BitNovaUnits::formatWithUnit(Unit unit, const CAmount& amount, bool plussign, SeparatorStyle separators)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    return format(unit, amount, plussign, separators) + QString(" ") + shortName(unit);
}

<<<<<<< HEAD
QString BitcoinUnits::formatHtmlWithUnit(Unit unit, const CAmount& amount, bool plussign, SeparatorStyle separators)
=======
QString BitNovaUnits::formatHtmlWithUnit(Unit unit, const CAmount& amount, bool plussign, SeparatorStyle separators)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    QString str(formatWithUnit(unit, amount, plussign, separators));
    str.replace(QChar(THIN_SP_CP), QString(THIN_SP_HTML));
    return QString("<span style='white-space: nowrap;'>%1</span>").arg(str);
}

<<<<<<< HEAD
QString BitcoinUnits::formatWithPrivacy(Unit unit, const CAmount& amount, SeparatorStyle separators, bool privacy)
=======
QString BitNovaUnits::formatWithPrivacy(Unit unit, const CAmount& amount, SeparatorStyle separators, bool privacy)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    assert(amount >= 0);
    QString value;
    if (privacy) {
        value = format(unit, 0, false, separators, true).replace('0', '#');
    } else {
        value = format(unit, amount, false, separators, true);
    }
    return value + QString(" ") + shortName(unit);
}

<<<<<<< HEAD
bool BitcoinUnits::parse(Unit unit, const QString& value, CAmount* val_out)
=======
bool BitNovaUnits::parse(Unit unit, const QString& value, CAmount* val_out)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    if (value.isEmpty()) {
        return false; // Refuse to parse invalid unit or empty string
    }
    int num_decimals = decimals(unit);

    // Ignore spaces and thin spaces when parsing
    QStringList parts = removeSpaces(value).split(".");

    if(parts.size() > 2)
    {
        return false; // More than one dot
    }
    const QString& whole = parts[0];
    QString decimals;

    if(parts.size() > 1)
    {
        decimals = parts[1];
    }
    if(decimals.size() > num_decimals)
    {
        return false; // Exceeds max precision
    }
    bool ok = false;
    QString str = whole + decimals.leftJustified(num_decimals, '0');

    if(str.size() > 18)
    {
        return false; // Longer numbers will exceed 63 bits
    }
    CAmount retvalue(str.toLongLong(&ok));
    if(val_out)
    {
        *val_out = retvalue;
    }
    return ok;
}

<<<<<<< HEAD
QString BitcoinUnits::getAmountColumnTitle(Unit unit)
=======
QString BitNovaUnits::getAmountColumnTitle(Unit unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    return QObject::tr("Amount") + " (" + shortName(unit) + ")";
}

<<<<<<< HEAD
int BitcoinUnits::rowCount(const QModelIndex &parent) const
=======
int BitNovaUnits::rowCount(const QModelIndex &parent) const
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    Q_UNUSED(parent);
    return unitlist.size();
}

<<<<<<< HEAD
QVariant BitcoinUnits::data(const QModelIndex &index, int role) const
=======
QVariant BitNovaUnits::data(const QModelIndex &index, int role) const
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    int row = index.row();
    if(row >= 0 && row < unitlist.size())
    {
        Unit unit = unitlist.at(row);
        switch(role)
        {
        case Qt::EditRole:
        case Qt::DisplayRole:
            return QVariant(longName(unit));
        case Qt::ToolTipRole:
            return QVariant(description(unit));
        case UnitRole:
            return QVariant::fromValue(unit);
        }
    }
    return QVariant();
}

<<<<<<< HEAD
CAmount BitcoinUnits::maxMoney()
=======
CAmount BitNovaUnits::maxMoney()
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    return MAX_MONEY;
}

namespace {
<<<<<<< HEAD
qint8 ToQint8(BitcoinUnit unit)
{
    switch (unit) {
    case BitcoinUnit::BTC: return 0;
    case BitcoinUnit::mBTC: return 1;
    case BitcoinUnit::uBTC: return 2;
    case BitcoinUnit::SAT: return 3;
=======
qint8 ToQint8(BitNovaUnit unit)
{
    switch (unit) {
    case BitNovaUnit::BTC: return 0;
    case BitNovaUnit::mBTC: return 1;
    case BitNovaUnit::uBTC: return 2;
    case BitNovaUnit::SAT: return 3;
>>>>>>> 5360f2baff (Initialized BitNova project)
    } // no default case, so the compiler can warn about missing cases
    assert(false);
}

<<<<<<< HEAD
BitcoinUnit FromQint8(qint8 num)
{
    switch (num) {
    case 0: return BitcoinUnit::BTC;
    case 1: return BitcoinUnit::mBTC;
    case 2: return BitcoinUnit::uBTC;
    case 3: return BitcoinUnit::SAT;
=======
BitNovaUnit FromQint8(qint8 num)
{
    switch (num) {
    case 0: return BitNovaUnit::BTC;
    case 1: return BitNovaUnit::mBTC;
    case 2: return BitNovaUnit::uBTC;
    case 3: return BitNovaUnit::SAT;
>>>>>>> 5360f2baff (Initialized BitNova project)
    }
    assert(false);
}
} // namespace

<<<<<<< HEAD
QDataStream& operator<<(QDataStream& out, const BitcoinUnit& unit)
=======
QDataStream& operator<<(QDataStream& out, const BitNovaUnit& unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    return out << ToQint8(unit);
}

<<<<<<< HEAD
QDataStream& operator>>(QDataStream& in, BitcoinUnit& unit)
=======
QDataStream& operator>>(QDataStream& in, BitNovaUnit& unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    qint8 input;
    in >> input;
    unit = FromQint8(input);
    return in;
}
