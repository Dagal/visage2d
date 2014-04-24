#include "Nez.h"

Nez::Nez(QGraphicsItem *parent) :
  QGraphicsItem(parent)
{
  // Définition du pinceau par défaut
  m_pen = new QPen(Qt::red,
                   3,
                   Qt::SolidLine,
                   Qt::RoundCap,
                   Qt::RoundJoin);
}

QRectF Nez::boundingRect() const
{
  return QRectF(-21, -21, 42, 42);
}

void Nez::paint(QPainter *painter,
                const QStyleOptionGraphicsItem *option,
                QWidget *widget)
{
  painter->setPen(*m_pen);

  static const QPointF points[3] = {
    QPointF(-10.0, -10.0),
    QPointF(-10.0, 10.0),
    QPointF(-20.0, 10.0)
  };
  painter->drawPolygon(points, 3);

  static const QPointF points2[3] = {
    QPointF(10.0, -10.0),
    QPointF(10.0, 10.0),
    QPointF(20.0, 10.0)
  };
  painter->drawPolygon(points2, 3);
}

void Nez::setPen(QPen *pen)
{
  if (pen != NULL)
    {
      delete m_pen;
      m_pen = pen;
    }
}
