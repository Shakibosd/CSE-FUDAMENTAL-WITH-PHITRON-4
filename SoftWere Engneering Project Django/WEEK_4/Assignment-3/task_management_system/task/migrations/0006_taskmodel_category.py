# Generated by Django 5.0.6 on 2024-06-19 10:39

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('category', '0005_remove_categorymodel_task'),
        ('task', '0005_remove_taskmodel_is_complited_taskmodel_is_completed'),
    ]

    operations = [
        migrations.AddField(
            model_name='taskmodel',
            name='category',
            field=models.ForeignKey(blank=True, null=True, on_delete=django.db.models.deletion.CASCADE, to='category.categorymodel'),
        ),
    ]