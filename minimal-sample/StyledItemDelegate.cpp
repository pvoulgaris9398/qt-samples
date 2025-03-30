#include <QStyledItemDelegate>

class StyledItemDelegate : public QStyledItemDelegate
{
public:
    using QStyledItemDelegate::QStyledItemDelegate;

protected:
    void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const
    {

        qDebug() << index;

        if (index.row() % 2 == 0)
            return;

        QStyledItemDelegate::initStyleOption(option, index);
        QFont font(option->font);
        // change font
        font.setBold(true);
        option->font = font;
        option->fontMetrics = QFontMetrics(font);
        // change text color
        option->palette.setBrush(QPalette::Text, QBrush(QColor("blue")));
    }
};
