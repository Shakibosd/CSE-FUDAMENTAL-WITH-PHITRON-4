# Generated by Django 5.0.6 on 2024-07-11 03:52

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('appointment_app', '0004_alter_appointment_appointent_types'),
        ('doctor_app', '0009_alter_review_options'),
    ]

    operations = [
        migrations.AlterField(
            model_name='appointment',
            name='time',
            field=models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='doctor_app.availabletime'),
        ),
    ]