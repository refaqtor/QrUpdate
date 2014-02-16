#ifndef TST_PACKAGEMANAGER_H
#define TST_PACKAGEMANAGER_H

#include <QtTest>

class TestPackageManager : public QObject
{
    Q_OBJECT

public:
    TestPackageManager() {}

private Q_SLOTS:
    void initTestCase();
    void testNewRepository();
    void testAddPackage();
    void testFixRepository();
    void cleanupTestCase();
};

#endif // TST_PACKAGEMANAGER_H
