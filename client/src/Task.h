#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QDateTime>

namespace BlackBook
{
    /**
     * @class Task
     * @brief Represents a task reminder for an user to be conveyed in a calendar view.
     */
    class Task : QObject
    {
        Q_OBJECT

    public:
        /**
         * @brief Constructs a new instance of the Task class.
         * @param name - The name of the task.
         * @param begin - The date and time when the Task begins.
         * @param duration - The duration of the task.
         */
        explicit Task(const QString& name, const QDateTime& begin, long long duration);

        /**
         * @brief Deletes this instance of Task.
         */
        virtual ~Task();

        /**
         * @brief Gets the date and time of the beginning of the Task.
         * @return A QDateTime representing the beginning of the Task.
         */
        QDateTime begin() const { return m_begin; }

        /**
         * @brief Sets the date and time of the beginning of the Task.
         * @param begin - The QDateTime to set as the beginning of the Task.
         */
        void setBegin(const QDateTime& begin) { m_begin = begin; }

        /**
         * @brief Gets the duration of the Task.
         * @return A long long representing the duration of the task.
         */
        long duration() const { return m_duration; }

        /**
         * @brief Sets the duration of the Task.
         * @param duration - The long long to set as the duration of the Task.
         */
        void setDuration(long long duration) { m_duration = duration; }

    private:
        /**
         * @brief The date of time of the beginning of the Task.
         */
        QDateTime m_begin;

        /**
         * @brief The duration of the task.
         */
        long long m_duration;
    };
}

#endif // TASK_H
