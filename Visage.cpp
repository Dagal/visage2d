#include "Visage.h"

Visage::Visage(QObject *parent) :
  BaseItem(parent)
{
  eyeScale = 0.2;
  oeuilGauche = new Oeuil(this);
  //oeuilGauche->setScale(eyeScale);
  oeuilGauche->setPos(-50,0);
  oeuilDroit = new Oeuil(this);
  oeuilDroit->setScale(-1);
  oeuilDroit->setPos(50,0);
  nez = new Nez(this);
  nez->setPos(0,30);
  bouche = new Bouche(this);
  bouche->setPos(0,70);
}

QRectF Visage::boundingRect() const
{
  return m_rect;
}

void Visage::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
  painter->setPen(m_pen);
  painter->setBrush(m_brush);
  painter->drawEllipse(m_rect);
}

