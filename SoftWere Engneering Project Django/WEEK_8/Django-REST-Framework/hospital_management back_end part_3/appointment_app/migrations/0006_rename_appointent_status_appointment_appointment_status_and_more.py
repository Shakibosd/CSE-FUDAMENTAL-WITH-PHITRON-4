# Generated by Django 5.0.6 on 2024-07-14 02:34

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('appointment_app', '0005_alter_appointment_time'),
    ]

    operations = [
        migrations.RenameField(
            model_name='appointment',
            old_name='appointent_status',
            new_name='appointment_status',
        ),
        migrations.RenameField(
            model_name='appointment',
            old_name='appointent_types',
            new_name='appointment_types',
        ),
    ]