#include "Oeuil.h"

Oeuil::Oeuil(QGraphicsItem *parent) :
  QGraphicsItem(parent)
{
  // Définition du pinceau
  m_pen = new QPen(Qt::red,
                 3,
                 Qt::SolidLine,
                 Qt::RoundCap,
                 Qt::RoundJoin);
}

QRectF Oeuil::boundingRect() const
{
  return QRectF(-21,-21,42,42);
}

void Oeuil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->setPen(*m_pen);
  painter->drawEllipse(-20,-20,40,40);
}

void Oeuil::setPen(QPen *pen)
{
  if (pen != NULL)
    {
      delete m_pen;
      m_pen = pen;
    }
}
