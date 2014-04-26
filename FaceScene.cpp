#include "FaceScene.h"

FaceScene::FaceScene(QObject *parent) :
  QGraphicsScene(parent)
{
  m_bgColor = Qt::darkGray;
  setBackgroundBrush(m_bgColor);

  m_color = Qt::blue;
  m_visage.setColor(m_color);
  m_visage.setRect(sceneRect());
  m_visage.setSize(90);
  addItem(&m_visage);
  connect(this,
          SIGNAL(sceneRectChanged(QRectF)),
          &m_visage,
          SLOT(setRect(QRectF)));
}
