/*
 * This file was generated by qofonodbusxml2cpp version 0.7
 * Command line was: qofonodbusxml2cpp -p qofonopushnotification ofono.xml org.ofono.PushNotification
 *
 * qofonodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QOFONOPUSHNOTIFICATION_H
#define QOFONOPUSHNOTIFICATION_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qofonodbusabstractinterface.h>

#if defined(QOFONO_LIBRARY)
    #define QOFONO_EXPORT Q_DECL_EXPORT
#else
    #define QOFONO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.ofono.PushNotification
 */
class QOFONO_EXPORT OrgOfonoPushNotificationInterface: public QOFonoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.PushNotification"; }

public:
    OrgOfonoPushNotificationInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgOfonoPushNotificationInterface();

public Q_SLOTS: // METHODS
    inline QOFonoDBusPendingReply<> RegisterAgent(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return ofonoAsyncCall(QLatin1String("RegisterAgent"), argumentList);
    }

    inline QOFonoDBusPendingReply<> UnregisterAgent(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return ofonoAsyncCall(QLatin1String("UnregisterAgent"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace ofono {
    typedef ::OrgOfonoPushNotificationInterface PushNotification;
  }
}
#endif
