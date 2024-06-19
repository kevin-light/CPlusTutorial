#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    void hunguty();
    void hunguty(QString food);

//public slots:
//    void treat();
};

#endif // TEACHER_H
