# Generated by Django 5.0.6 on 2024-07-02 02:00

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('Books', '0011_remove_borrow_is_returend'),
    ]

    operations = [
        migrations.AlterField(
            model_name='bookmodel',
            name='category',
            field=models.ManyToManyField(to='Books.category'),
        ),
    ]