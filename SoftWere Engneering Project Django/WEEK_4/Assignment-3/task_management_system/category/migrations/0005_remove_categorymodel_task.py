# Generated by Django 5.0.6 on 2024-06-19 10:39

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('category', '0004_categorymodel_task'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='categorymodel',
            name='task',
        ),
    ]