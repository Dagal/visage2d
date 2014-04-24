#include "Bouche.h"

Bouche::Bouche(QGraphicsItem *parent) :
  QGraphicsItem(parent)
{
  // Définition du pinceau par défaut
  m_pen = new QPen(Qt::red,
                   3,
                   Qt::SolidLine,
                   Qt::RoundCap,
                   Qt::RoundJoin);
}

QRectF Bouche::boundingRect() const
{
  return QRectF(-30,-10,60,20);
}

void Bouche::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
  painter->setPen(*m_pen);

  static const QPointF points[8] = {
    QPointF(0,10),
    QPointF(20,10),
    QPointF(30,0),
    QPointF(20,-10),
    QPointF(0,-10),
    QPointF(-20,-10),
    QPointF(-30,0),
    QPointF(-20,10)
  };
  painter->drawPolygon(points,8);
}

void Bouche::setPen(QPen *pen)
{
  if (pen != NULL)
    {
      delete m_pen;
      m_pen = pen;
    }
}
