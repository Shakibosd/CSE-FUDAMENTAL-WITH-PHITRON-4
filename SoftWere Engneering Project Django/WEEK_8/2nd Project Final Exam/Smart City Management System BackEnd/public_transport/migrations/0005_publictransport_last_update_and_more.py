# Generated by Django 5.1.2 on 2024-10-30 11:19

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('public_transport', '0004_publictransport_schedules'),
    ]

    operations = [
        migrations.AddField(
            model_name='publictransport',
            name='last_update',
            field=models.CharField(default=1, max_length=300),
            preserve_default=False,
        ),
        migrations.AddField(
            model_name='publictransport',
            name='next_arrival_time',
            field=models.CharField(default=1, max_length=200),
            preserve_default=False,
        ),
    ]