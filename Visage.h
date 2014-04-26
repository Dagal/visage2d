#ifndef VISAGE_H
#define VISAGE_H

#include <QPainter>

#include "BaseItem.h"
#include "Oeuil.h"
#include "Nez.h"
#include "Bouche.h"

class Visage : public BaseItem
{
  Q_OBJECT

private:
  Oeuil* oeuilGauche;
  Oeuil* oeuilDroit;
  Nez* nez;
  Bouche* bouche;
  qreal eyeScale;

public:
  explicit Visage(QObject *parent = 0);
  virtual QRectF boundingRect() const;
  virtual void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option,
             QWidget *widget);

signals:

public slots:

};

#endif // VISAGE_H
