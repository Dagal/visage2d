#ifndef FACESCENE_H
#define FACESCENE_H

#include <QGraphicsScene>

#include "Visage.h"

class FaceScene : public QGraphicsScene
{
  Q_OBJECT

protected:
  QColor m_bgColor;
  QColor m_color;
  Visage m_visage;

public:
  explicit FaceScene(QObject *parent = 0);

signals:

public slots:

};

#endif // FACESCENE_H
