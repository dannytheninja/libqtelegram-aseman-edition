// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputstickersetobject.h"

InputStickerSetObject::InputStickerSetObject(const InputStickerSet &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

InputStickerSetObject::InputStickerSetObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

InputStickerSetObject::~InputStickerSetObject() {
}

void InputStickerSetObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 InputStickerSetObject::accessHash() const {
    return m_core.accessHash();
}

void InputStickerSetObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 InputStickerSetObject::id() const {
    return m_core.id();
}

void InputStickerSetObject::setShortName(const QString &shortName) {
    if(m_core.shortName() == shortName) return;
    m_core.setShortName(shortName);
    Q_EMIT shortNameChanged();
    Q_EMIT coreChanged();
}

QString InputStickerSetObject::shortName() const {
    return m_core.shortName();
}

InputStickerSetObject &InputStickerSetObject::operator =(const InputStickerSet &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT idChanged();
    Q_EMIT shortNameChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool InputStickerSetObject::operator ==(const InputStickerSet &b) const {
    return m_core == b;
}

void InputStickerSetObject::setClassType(int classType) {
    InputStickerSet::InputStickerSetType result;
    switch(classType) {
    case TypeInputStickerSetEmpty:
        result = InputStickerSet::typeInputStickerSetEmpty;
        break;
    case TypeInputStickerSetID:
        result = InputStickerSet::typeInputStickerSetID;
        break;
    case TypeInputStickerSetShortName:
        result = InputStickerSet::typeInputStickerSetShortName;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int InputStickerSetObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputStickerSet::typeInputStickerSetEmpty:
        result = TypeInputStickerSetEmpty;
        break;
    case InputStickerSet::typeInputStickerSetID:
        result = TypeInputStickerSetID;
        break;
    case InputStickerSet::typeInputStickerSetShortName:
        result = TypeInputStickerSetShortName;
        break;
    }

    return result;
}

void InputStickerSetObject::setCore(const InputStickerSet &core) {
    operator =(core);
}

InputStickerSet InputStickerSetObject::core() const {
    return m_core;
}
