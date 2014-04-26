#ifndef BASEITEM_H
#define BASEITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPen>
#include <QPainter>

class BaseItem : public QObject, public QGraphicsItem
{
  Q_OBJECT

private:
  static const QRectF default_rect; // Rectangle par défaut

protected:
  qreal m_size; // Taille en % de la place disponible
  QRectF m_rect; // Rectangle dessinable
  qreal m_ratio; // Déformation xy
  QPen m_pen; // Stylo par défaut
  QBrush m_brush; // Remplissage de forme
  QString m_emote; // Emotion

public:
  explicit BaseItem(QObject *parent = 0);
  virtual QRectF boundingRect() const;
  virtual void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option,
             QWidget *widget);



signals:
  void rectChanged(const QRectF &rect);
  void penChanged(const QPen &pen);
  void sizeChanged(const qreal &size);
  void brushChanged(const QBrush &brush);
  void colorChanged(const QColor &color);
  void emoteChanged(const QString &emoto);

public slots:
  void setRect(const QRectF &rect);
  void setPen(const QPen &pen);
  void setSize(const qreal &size);
  void setBrush(const QBrush &brush);
  void setColor(const QColor &color);
  void setEmote(const QString &emote);
};

#endif // BASEITEM_H
