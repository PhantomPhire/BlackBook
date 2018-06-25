#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H

#include <QCalendarWidget>

namespace BlackBook
{
    /**
     * @class CalendarWidget
     * @brief A widget displaying a calendar view with annotations on tasks.
     *
     * The CalendarWidget class is an extension to the QCalendarWidget class that, in addition to
     * displaying dates, shows markings on dates to indicate that there tasks of different types
     * on those dates.
     */
    class CalendarWidget : public QCalendarWidget
    {
        Q_OBJECT
    public:
        /**
         * @brief Constructs a new instance of the CalendarWidget class.
         * @param parent - The parent to this widget.
         */
        explicit CalendarWidget(QWidget* parent = nullptr);

        /**
         * @brief Deletes this instance of CalendarWidget.
         */
        virtual ~CalendarWidget();

    protected:
        /**
         * @brief Paints a single date's cell along with any task annotations applying to that
         *        date.
         * @param painter - The painter being used to paint the cell.
         * @param rect - The rectangle confining the cell.
         * @param date - The date being painted.
         */
        void paintCell(QPainter* painter, const QRect& rect, const QDate& date) const Q_DECL_OVERRIDE;
    };
}

#endif // CALENDARWIDGET_H
