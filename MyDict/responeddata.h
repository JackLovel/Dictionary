#ifndef RESPONEDDATA_H
#define RESPONEDDATA_H

#include "dict.h"

class ResponedData
{
public:
    friend class Dict;

    ResponedData() = default;
    ResponedData(const QString &n, const QString &ukPr,
                 const QString &usPr, const QString &ch,
                 const QString &ukAu, const QString &usAu,
                 const QString &msg) : name(n), ukPron(ukPr), usPron(usPr), chinese(ch), ukAudio(ukAu), usAudio(usAu), message(msg) {}

    ~ResponedData();

public:
    QString name;
    QString ukPron;
    QString usPron;
    QString chinese;
    QString ukAudio;
    QString usAudio;
    QString message;
};
#endif // RESPONEDDATA_H
