#ifndef QOFONOOBJECTLIST_H
#define QOFONOOBJECTLIST_H

#include <QtDBus>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

class QOFONO_EXPORT QOFonoObject
{
public:
    explicit QOFonoObject();
    QDBusObjectPath object;
    QVariantMap properties;
    QOFONO_EXPORT friend QDBusArgument &operator<<(QDBusArgument &argument, const QOFonoObject & value);
    QOFONO_EXPORT friend const QDBusArgument &operator>>(const QDBusArgument &argument, QOFonoObject & value);
};

Q_DECLARE_METATYPE(QOFonoObject)

typedef QList<QOFonoObject> QOFonoObjectList;
Q_DECLARE_METATYPE(QOFonoObjectList)

#endif // QOFONOOBJECTLIST_H        