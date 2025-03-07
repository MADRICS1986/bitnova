<<<<<<< HEAD
// Copyright (c) 2011-2021 The Bitcoin Core developers
=======
// Copyright (c) 2011-2021 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINAMOUNTFIELD_H
#define BITCOIN_QT_BITCOINAMOUNTFIELD_H

#include <consensus/amount.h>
<<<<<<< HEAD
#include <qt/bitcoinunits.h>
=======
#include <qt/bitnovaunits.h>
>>>>>>> 5360f2baff (Initialized BitNova project)

#include <QWidget>

class AmountSpinBox;

QT_BEGIN_NAMESPACE
class QValueComboBox;
QT_END_NAMESPACE

<<<<<<< HEAD
/** Widget for entering bitcoin amounts.
  */
class BitcoinAmountField: public QWidget
=======
/** Widget for entering bitnova amounts.
  */
class BitNovaAmountField: public QWidget
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    Q_OBJECT

    // ugly hack: for some unknown reason CAmount (instead of qint64) does not work here as expected
<<<<<<< HEAD
    // discussion: https://github.com/bitcoin/bitcoin/pull/5117
    Q_PROPERTY(qint64 value READ value WRITE setValue NOTIFY valueChanged USER true)

public:
    explicit BitcoinAmountField(QWidget *parent = nullptr);
=======
    // discussion: https://github.com/bitnova/bitnova/pull/5117
    Q_PROPERTY(qint64 value READ value WRITE setValue NOTIFY valueChanged USER true)

public:
    explicit BitNovaAmountField(QWidget *parent = nullptr);
>>>>>>> 5360f2baff (Initialized BitNova project)

    CAmount value(bool *value=nullptr) const;
    void setValue(const CAmount& value);

    /** If allow empty is set to false the field will be set to the minimum allowed value if left empty. **/
    void SetAllowEmpty(bool allow);

    /** Set the minimum value in satoshis **/
    void SetMinValue(const CAmount& value);

    /** Set the maximum value in satoshis **/
    void SetMaxValue(const CAmount& value);

    /** Set single step in satoshis **/
    void setSingleStep(const CAmount& step);

    /** Make read-only **/
    void setReadOnly(bool fReadOnly);

    /** Mark current value as invalid in UI. */
    void setValid(bool valid);
    /** Perform input validation, mark field as invalid if entered value is not valid. */
    bool validate();

    /** Change unit used to display amount. */
<<<<<<< HEAD
    void setDisplayUnit(BitcoinUnit new_unit);
=======
    void setDisplayUnit(BitNovaUnit new_unit);
>>>>>>> 5360f2baff (Initialized BitNova project)

    /** Make field empty and ready for new input. */
    void clear();

    /** Enable/Disable. */
    void setEnabled(bool fEnabled);

    /** Qt messes up the tab chain by default in some cases (issue https://bugreports.qt-project.org/browse/QTBUG-10907),
        in these cases we have to set it up manually.
    */
    QWidget *setupTabChain(QWidget *prev);

Q_SIGNALS:
    void valueChanged();

protected:
    /** Intercept focus-in event and ',' key presses */
    bool eventFilter(QObject *object, QEvent *event) override;

private:
    AmountSpinBox* amount{nullptr};
    QValueComboBox *unit;

private Q_SLOTS:
    void unitChanged(int idx);

};

#endif // BITCOIN_QT_BITCOINAMOUNTFIELD_H
