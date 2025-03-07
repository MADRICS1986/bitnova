<<<<<<< HEAD
// Copyright (c) 2011-2022 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/bitcoinamountfield.h>

#include <qt/bitcoinunits.h>
=======
// Copyright (c) 2011-2022 The BitNova Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/bitnovaamountfield.h>

#include <qt/bitnovaunits.h>
>>>>>>> 5360f2baff (Initialized BitNova project)
#include <qt/guiconstants.h>
#include <qt/guiutil.h>
#include <qt/qvaluecombobox.h>

#include <QApplication>
#include <QAbstractSpinBox>
#include <QHBoxLayout>
#include <QKeyEvent>
#include <QLineEdit>
#include <QVariant>

#include <cassert>

/** QSpinBox that uses fixed-point numbers internally and uses our own
 * formatting/parsing functions.
 */
class AmountSpinBox: public QAbstractSpinBox
{
    Q_OBJECT

public:
    explicit AmountSpinBox(QWidget *parent):
        QAbstractSpinBox(parent)
    {
        setAlignment(Qt::AlignRight);

        connect(lineEdit(), &QLineEdit::textEdited, this, &AmountSpinBox::valueChanged);
    }

    QValidator::State validate(QString &text, int &pos) const override
    {
        if(text.isEmpty())
            return QValidator::Intermediate;
        bool valid = false;
        parse(text, &valid);
        /* Make sure we return Intermediate so that fixup() is called on defocus */
        return valid ? QValidator::Intermediate : QValidator::Invalid;
    }

    void fixup(QString &input) const override
    {
        bool valid;
        CAmount val;

        if (input.isEmpty() && !m_allow_empty) {
            valid = true;
            val = m_min_amount;
        } else {
            valid = false;
            val = parse(input, &valid);
        }

        if (valid) {
            val = qBound(m_min_amount, val, m_max_amount);
<<<<<<< HEAD
            input = BitcoinUnits::format(currentUnit, val, false, BitcoinUnits::SeparatorStyle::ALWAYS);
=======
            input = BitNovaUnits::format(currentUnit, val, false, BitNovaUnits::SeparatorStyle::ALWAYS);
>>>>>>> 5360f2baff (Initialized BitNova project)
            lineEdit()->setText(input);
        }
    }

    CAmount value(bool *valid_out=nullptr) const
    {
        return parse(text(), valid_out);
    }

    void setValue(const CAmount& value)
    {
<<<<<<< HEAD
        lineEdit()->setText(BitcoinUnits::format(currentUnit, value, false, BitcoinUnits::SeparatorStyle::ALWAYS));
=======
        lineEdit()->setText(BitNovaUnits::format(currentUnit, value, false, BitNovaUnits::SeparatorStyle::ALWAYS));
>>>>>>> 5360f2baff (Initialized BitNova project)
        Q_EMIT valueChanged();
    }

    void SetAllowEmpty(bool allow)
    {
        m_allow_empty = allow;
    }

    void SetMinValue(const CAmount& value)
    {
        m_min_amount = value;
    }

    void SetMaxValue(const CAmount& value)
    {
        m_max_amount = value;
    }

    void stepBy(int steps) override
    {
        bool valid = false;
        CAmount val = value(&valid);
        val = val + steps * singleStep;
        val = qBound(m_min_amount, val, m_max_amount);
        setValue(val);
    }

<<<<<<< HEAD
    void setDisplayUnit(BitcoinUnit unit)
=======
    void setDisplayUnit(BitNovaUnit unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
    {
        bool valid = false;
        CAmount val = value(&valid);

        currentUnit = unit;
<<<<<<< HEAD
        lineEdit()->setPlaceholderText(BitcoinUnits::format(currentUnit, m_min_amount, false, BitcoinUnits::SeparatorStyle::ALWAYS));
=======
        lineEdit()->setPlaceholderText(BitNovaUnits::format(currentUnit, m_min_amount, false, BitNovaUnits::SeparatorStyle::ALWAYS));
>>>>>>> 5360f2baff (Initialized BitNova project)
        if(valid)
            setValue(val);
        else
            clear();
    }

    void setSingleStep(const CAmount& step)
    {
        singleStep = step;
    }

    QSize minimumSizeHint() const override
    {
        if(cachedMinimumSizeHint.isEmpty())
        {
            ensurePolished();

            const QFontMetrics fm(fontMetrics());
            int h = lineEdit()->minimumSizeHint().height();
<<<<<<< HEAD
            int w = GUIUtil::TextWidth(fm, BitcoinUnits::format(BitcoinUnit::BTC, BitcoinUnits::maxMoney(), false, BitcoinUnits::SeparatorStyle::ALWAYS));
=======
            int w = GUIUtil::TextWidth(fm, BitNovaUnits::format(BitNovaUnit::BTC, BitNovaUnits::maxMoney(), false, BitNovaUnits::SeparatorStyle::ALWAYS));
>>>>>>> 5360f2baff (Initialized BitNova project)
            w += 2; // cursor blinking space

            QStyleOptionSpinBox opt;
            initStyleOption(&opt);
            QSize hint(w, h);
            QSize extra(35, 6);
            opt.rect.setSize(hint + extra);
            extra += hint - style()->subControlRect(QStyle::CC_SpinBox, &opt,
                                                    QStyle::SC_SpinBoxEditField, this).size();
            // get closer to final result by repeating the calculation
            opt.rect.setSize(hint + extra);
            extra += hint - style()->subControlRect(QStyle::CC_SpinBox, &opt,
                                                    QStyle::SC_SpinBoxEditField, this).size();
            hint += extra;
            hint.setHeight(h);

            opt.rect = rect();

            cachedMinimumSizeHint = style()->sizeFromContents(QStyle::CT_SpinBox, &opt, hint, this);
        }
        return cachedMinimumSizeHint;
    }

private:
<<<<<<< HEAD
    BitcoinUnit currentUnit{BitcoinUnit::BTC};
=======
    BitNovaUnit currentUnit{BitNovaUnit::BTC};
>>>>>>> 5360f2baff (Initialized BitNova project)
    CAmount singleStep{CAmount(100000)}; // satoshis
    mutable QSize cachedMinimumSizeHint;
    bool m_allow_empty{true};
    CAmount m_min_amount{CAmount(0)};
<<<<<<< HEAD
    CAmount m_max_amount{BitcoinUnits::maxMoney()};
=======
    CAmount m_max_amount{BitNovaUnits::maxMoney()};
>>>>>>> 5360f2baff (Initialized BitNova project)

    /**
     * Parse a string into a number of base monetary units and
     * return validity.
     * @note Must return 0 if !valid.
     */
    CAmount parse(const QString &text, bool *valid_out=nullptr) const
    {
        CAmount val = 0;
<<<<<<< HEAD
        bool valid = BitcoinUnits::parse(currentUnit, text, &val);
        if(valid)
        {
            if(val < 0 || val > BitcoinUnits::maxMoney())
=======
        bool valid = BitNovaUnits::parse(currentUnit, text, &val);
        if(valid)
        {
            if(val < 0 || val > BitNovaUnits::maxMoney())
>>>>>>> 5360f2baff (Initialized BitNova project)
                valid = false;
        }
        if(valid_out)
            *valid_out = valid;
        return valid ? val : 0;
    }

protected:
    bool event(QEvent *event) override
    {
        if (event->type() == QEvent::KeyPress || event->type() == QEvent::KeyRelease)
        {
            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            if (keyEvent->key() == Qt::Key_Comma)
            {
                // Translate a comma into a period
                QKeyEvent periodKeyEvent(event->type(), Qt::Key_Period, keyEvent->modifiers(), ".", keyEvent->isAutoRepeat(), keyEvent->count());
                return QAbstractSpinBox::event(&periodKeyEvent);
            }
        }
        return QAbstractSpinBox::event(event);
    }

    StepEnabled stepEnabled() const override
    {
        if (isReadOnly()) // Disable steps when AmountSpinBox is read-only
            return StepNone;
        if (text().isEmpty()) // Allow step-up with empty field
            return StepUpEnabled;

        StepEnabled rv = StepNone;
        bool valid = false;
        CAmount val = value(&valid);
        if (valid) {
            if (val > m_min_amount)
                rv |= StepDownEnabled;
            if (val < m_max_amount)
                rv |= StepUpEnabled;
        }
        return rv;
    }

Q_SIGNALS:
    void valueChanged();
};

<<<<<<< HEAD
#include <qt/bitcoinamountfield.moc>

BitcoinAmountField::BitcoinAmountField(QWidget* parent)
=======
#include <qt/bitnovaamountfield.moc>

BitNovaAmountField::BitNovaAmountField(QWidget* parent)
>>>>>>> 5360f2baff (Initialized BitNova project)
    : QWidget(parent)
{
    amount = new AmountSpinBox(this);
    amount->setLocale(QLocale::c());
    amount->installEventFilter(this);
    amount->setMaximumWidth(240);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(amount);
    unit = new QValueComboBox(this);
<<<<<<< HEAD
    unit->setModel(new BitcoinUnits(this));
=======
    unit->setModel(new BitNovaUnits(this));
>>>>>>> 5360f2baff (Initialized BitNova project)
    layout->addWidget(unit);
    layout->addStretch(1);
    layout->setContentsMargins(0,0,0,0);

    setLayout(layout);

    setFocusPolicy(Qt::TabFocus);
    setFocusProxy(amount);

    // If one if the widgets changes, the combined content changes as well
<<<<<<< HEAD
    connect(amount, &AmountSpinBox::valueChanged, this, &BitcoinAmountField::valueChanged);
    connect(unit, qOverload<int>(&QComboBox::currentIndexChanged), this, &BitcoinAmountField::unitChanged);
=======
    connect(amount, &AmountSpinBox::valueChanged, this, &BitNovaAmountField::valueChanged);
    connect(unit, qOverload<int>(&QComboBox::currentIndexChanged), this, &BitNovaAmountField::unitChanged);
>>>>>>> 5360f2baff (Initialized BitNova project)

    // Set default based on configuration
    unitChanged(unit->currentIndex());
}

<<<<<<< HEAD
void BitcoinAmountField::clear()
=======
void BitNovaAmountField::clear()
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->clear();
    unit->setCurrentIndex(0);
}

<<<<<<< HEAD
void BitcoinAmountField::setEnabled(bool fEnabled)
=======
void BitNovaAmountField::setEnabled(bool fEnabled)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->setEnabled(fEnabled);
    unit->setEnabled(fEnabled);
}

<<<<<<< HEAD
bool BitcoinAmountField::validate()
=======
bool BitNovaAmountField::validate()
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    bool valid = false;
    value(&valid);
    setValid(valid);
    return valid;
}

<<<<<<< HEAD
void BitcoinAmountField::setValid(bool valid)
=======
void BitNovaAmountField::setValid(bool valid)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    if (valid)
        amount->setStyleSheet("");
    else
        amount->setStyleSheet(STYLE_INVALID);
}

<<<<<<< HEAD
bool BitcoinAmountField::eventFilter(QObject *object, QEvent *event)
=======
bool BitNovaAmountField::eventFilter(QObject *object, QEvent *event)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    if (event->type() == QEvent::FocusIn)
    {
        // Clear invalid flag on focus
        setValid(true);
    }
    return QWidget::eventFilter(object, event);
}

<<<<<<< HEAD
QWidget *BitcoinAmountField::setupTabChain(QWidget *prev)
=======
QWidget *BitNovaAmountField::setupTabChain(QWidget *prev)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    QWidget::setTabOrder(prev, amount);
    QWidget::setTabOrder(amount, unit);
    return unit;
}

<<<<<<< HEAD
CAmount BitcoinAmountField::value(bool *valid_out) const
=======
CAmount BitNovaAmountField::value(bool *valid_out) const
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    return amount->value(valid_out);
}

<<<<<<< HEAD
void BitcoinAmountField::setValue(const CAmount& value)
=======
void BitNovaAmountField::setValue(const CAmount& value)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->setValue(value);
}

<<<<<<< HEAD
void BitcoinAmountField::SetAllowEmpty(bool allow)
=======
void BitNovaAmountField::SetAllowEmpty(bool allow)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->SetAllowEmpty(allow);
}

<<<<<<< HEAD
void BitcoinAmountField::SetMinValue(const CAmount& value)
=======
void BitNovaAmountField::SetMinValue(const CAmount& value)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->SetMinValue(value);
}

<<<<<<< HEAD
void BitcoinAmountField::SetMaxValue(const CAmount& value)
=======
void BitNovaAmountField::SetMaxValue(const CAmount& value)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->SetMaxValue(value);
}

<<<<<<< HEAD
void BitcoinAmountField::setReadOnly(bool fReadOnly)
=======
void BitNovaAmountField::setReadOnly(bool fReadOnly)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->setReadOnly(fReadOnly);
}

<<<<<<< HEAD
void BitcoinAmountField::unitChanged(int idx)
=======
void BitNovaAmountField::unitChanged(int idx)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    // Use description tooltip for current unit for the combobox
    unit->setToolTip(unit->itemData(idx, Qt::ToolTipRole).toString());

    // Determine new unit ID
<<<<<<< HEAD
    QVariant new_unit = unit->currentData(BitcoinUnits::UnitRole);
    assert(new_unit.isValid());
    amount->setDisplayUnit(new_unit.value<BitcoinUnit>());
}

void BitcoinAmountField::setDisplayUnit(BitcoinUnit new_unit)
=======
    QVariant new_unit = unit->currentData(BitNovaUnits::UnitRole);
    assert(new_unit.isValid());
    amount->setDisplayUnit(new_unit.value<BitNovaUnit>());
}

void BitNovaAmountField::setDisplayUnit(BitNovaUnit new_unit)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    unit->setValue(QVariant::fromValue(new_unit));
}

<<<<<<< HEAD
void BitcoinAmountField::setSingleStep(const CAmount& step)
=======
void BitNovaAmountField::setSingleStep(const CAmount& step)
>>>>>>> 5360f2baff (Initialized BitNova project)
{
    amount->setSingleStep(step);
}
