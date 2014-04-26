#include "BaseItem.h"

const QRectF BaseItem::default_rect = QRect(-100,-100,200,200);

BaseItem::BaseItem(QObject *parent) :
  QObject(parent),
  QGraphicsItem()
{
  m_size = 100;
  m_rect = default_rect;
  m_ratio = 1;
  m_brush.setColor(Qt::red);
  m_brush.setStyle(Qt::SolidPattern);
  m_pen.setColor(Qt::red);
  m_pen.setWidth(3);
  m_pen.setStyle(Qt::SolidLine);
  m_pen.setCapStyle(Qt::RoundCap);
  m_pen.setJoinStyle(Qt::RoundJoin);
  m_pen.setBrush(m_brush);
  m_emote = ":|";
}

QRectF BaseItem::boundingRect() const
{
  return m_rect;
}

void BaseItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
}

void BaseItem::setPen(const QPen& pen)
{
      m_pen = pen;
}

void BaseItem::setSize(const qreal &size)
{
  if (size > 0)
    m_size = size;
}

void BaseItem::setBrush(const QBrush &brush)
{
  m_brush = brush;
}

void BaseItem::setColor(const QColor &color)
{
  m_brush.setColor(color);
  m_pen.setColor(color);
}

void BaseItem::setEmote(const QString &emote)
{
  m_emote = emote;
  // todo: Envoyer l'émotion à tous les sous Item's
}

void BaseItem::setRect(const QRectF &rect)
{
  if (rect.isValid())
    m_rect = rect;
}
