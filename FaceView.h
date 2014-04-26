#ifndef FACEVIEW_H
#define FACEVIEW_H

#include <QGraphicsView>

#include "FaceScene.h"

class FaceView : public QGraphicsView
{
  Q_OBJECT

public:
  explicit FaceView(QWidget *parent = 0);
  explicit FaceView(QGraphicsScene * scene, QWidget * parent = 0);

  void initialise();

signals:

public slots:

};

#endif // FACEVIEW_H
