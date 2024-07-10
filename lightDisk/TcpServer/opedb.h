#ifndef OPEDB_H
#define OPEDB_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class OpeDB : public QObject
{
    Q_OBJECT
public:
    explicit OpeDB(QObject *parent = nullptr);
    // 单例模式实现：先定义为静态函数,给一个定义的静态的对象，每次调用静态函数，使用静态变量，使用同一个对象
    static OpeDB& getInstance();

    void init();
    ~OpeDB();  // 析构函数

    bool handleRegist(const char *name, const char *pwd);
    bool handleLogin(const char *name, const char *pwd);
    void handleOffline(const char *name);
    QStringList handleAllOnline();
    int handleSearchUser(const char *name);
    int handleAddFriend(const char *pername, const char *name);
    QStringList handleFlushFriend(const char *name);
    bool handleDelFriend(const char *name,const char *friendName);


signals:

private:
    QSqlDatabase m_db;
};

#endif // OPEDB_H
