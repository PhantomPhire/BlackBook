#define TIMER_TIMEOUT 700

#include "CalendarWidget.h"
#include <QPainter>
#include <stdio.h>

namespace BlackBook
{
    /**
     * @brief Constructs a new instance of the CalendarWidget class.
     * @param parent - The parent to this widget.
     */
    CalendarWidget::CalendarWidget(QWidget* parent)
        : QCalendarWidget(parent)
    {
    }

    /**
     * @brief Deletes this instance of CalendarWidget.
     */
    CalendarWidget::~CalendarWidget()
    {
    }

    /**
     * @brief Paints a single date's cell along with any task annotations applying to that
     *        date.
     * @param painter - The painter being used to paint the cell.
     * @param rect - The rectangle confining the cell.
     * @param date - The date being painted.
     */
    void CalendarWidget::paintCell(QPainter *painter, const QRect &rect, const QDate &date) const
    {
        QCalendarWidget::paintCell(painter, rect, date);
        // TODO: Paint tasks here
        /*painter->save();

        painter->drawText(rect, Qt::TextSingleLine | Qt::AlignCenter, QString::number(date.day()));
        painter->restore();*/
    }
}
