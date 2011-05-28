/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsodeviceidlenotifier -c QFsoDeviceIdleNotifier specs/xml/org.freesmartphone.Device.IdleNotifier.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSODEVICEIDLENOTIFIER_H
#define QFSODEVICEIDLENOTIFIER_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "qfsointmap.h"

/*
 * Proxy class for interface org.freesmartphone.Device.IdleNotifier
 */
class QFsoDeviceIdleNotifier: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Device.IdleNotifier"; }

public:
    QFsoDeviceIdleNotifier(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoDeviceIdleNotifier();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> GetState()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetState"), argumentList);
    }

    inline QDBusPendingReply<QFsoIntMap> GetTimeouts()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetTimeouts"), argumentList);
    }

    inline QDBusPendingReply<> SetState(const QString &status)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(status);
        return asyncCallWithArgumentList(QLatin1String("SetState"), argumentList);
    }

    inline QDBusPendingReply<> SetTimeout(const QString &status, int timeout)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(status) << qVariantFromValue(timeout);
        return asyncCallWithArgumentList(QLatin1String("SetTimeout"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void State(const QString &status);
};

namespace org {
  namespace freesmartphone {
    namespace Device {
      typedef ::QFsoDeviceIdleNotifier IdleNotifier;
    }
  }
}
#endif